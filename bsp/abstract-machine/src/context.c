#include <am.h>
#include <klib.h>
#include <rtthread.h>

static inline uintptr_t align_down(uintptr_t addr, uintptr_t alignment) {
  assert(alignment != 0 && (alignment & (alignment - 1)) == 0);
  return addr & ~(alignment - 1);
}

static Context* ev_handler(Event e, Context *c) {
  switch (e.event) {
    default: printf("Unhandled event ID = %d\n", e.event); assert(0);
  }
  return c;
}

void __am_cte_init() {
  cte_init(ev_handler);
}

void rt_hw_context_switch_to(rt_ubase_t to) {
  assert(0);
}

void rt_hw_context_switch(rt_ubase_t from, rt_ubase_t to) {
  assert(0);
}

void rt_hw_context_switch_interrupt(void *context, rt_ubase_t from, rt_ubase_t to, struct rt_thread *to_thread) {
  assert(0);
}

rt_uint8_t *rt_hw_stack_init(void *tentry, void *parameter, rt_uint8_t *stack_addr, void *texit) {
  assert(0);
  return NULL;
}
