/* chronos/rma.c
 *
 * RMA Single-Core Scheduler Module for ChronOS
 *
 * Author(s)
 *	- Matthew Dellinger, mdelling@vt.edu
 *
 * Copyright (C) 2009-2012 Virginia Tech Real Time Systems Lab
 */

#include <linux/module.h>
#include <linux/chronos_types.h>
#include <linux/chronos_sched.h>
#include <linux/list.h>
#include <linux/time.h>
//#include <linux/stdint.h>
#include <linux/chronos_util.h>

struct process_mutex_list{
	pid_t tgid;
	struct list_head p_list;
	struct list_head m_list;
	rwlock_t lock;
};
static unsigned long timespec_to_longh(const struct timespec *ts)
{
return ts->tv_sec*1000000 + ts->tv_nsec/1000;
}

extern struct process_mutex_list * find_by_tgid(pid_t pid);
//int array[5] = {3000000, 5000000, 5000000, 15000000, 3000000};
struct rt_info* sched_foo(struct list_head *head, int flags)
{
	struct process_mutex_list *p = find_by_tgid(current->tgid);
	int count =0;

//	struct list_head *m_list = p->m_list;
	struct list_head m_list = p->m_list;
	struct mutex_head *it = NULL;

	struct rt_info *task, *best = local_task(head->next);
		if(flags & SCHED_FLAG_PI)
			best = get_pi_task(best, head, flags);

	list_for_each_entry(it, &m_list, list){
		struct mutex_data * m_data = it->mutex;
	//	m_data->ceil_val = array[(count++)%4];
		if(m_data->owner){
			long tempPeriod = timespec_to_longh(&best->period);
		//	struct rt_info *tsk = NULL;
		if(tempPeriod > m_data->ceil_val){
		//	if(best->period < it->abhi){
				best = m_data->owner; 
			}
		}
	//	printk(KERN_ALERT "%d", m_data->value);
	}
/*	list_for_each_entry(task, best, task_list[LOCAL_LIST]){
		if(check_test_failure(task,flags)
				return task;
		mutex_head *p = get_requested_resource(task);
		if(p->ceil_val > task->period)
			return task;
	}

*/	return best;
}

struct rt_sched_local foo = {
	.base.name = "FOO",
	.base.id = SCHED_RT_FOO,
	.flags = 0,
	.schedule = sched_foo,
	.base.sort_key = SORT_KEY_PERIOD,
	.base.list = LIST_HEAD_INIT(foo.base.list)
};

static int __init foo_init(void)
{
	return add_local_scheduler(&foo);
}
module_init(foo_init);

static void __exit foo_exit(void)
{
	remove_local_scheduler(&foo);
}
module_exit(foo_exit);

MODULE_DESCRIPTION("RMA Single-Core Scheduling Module for ChronOS");
MODULE_AUTHOR("Matthew Dellinger <matthew@mdelling.com>");
MODULE_LICENSE("GPL");

