/* >>>------------------------------------------------------------
 *
 * File: pthread.h
 *
 * <<<------------------------------------------------------------ */


#ifndef PRQA_PTHREAD_H
#define PRQA_PTHREAD_H

/* PRQA S 4600,3632,3602,3672,776,777 EOF */

#if defined( __cplusplus )
extern "C"
{
#endif

typedef unsigned long int pthread_t;

#define PTHREAD_MUTEX_INITIALIZER {}

typedef struct
{
  char m_dummy;
} pthread_mutex_t;

typedef struct
{
  char m_dummy;
} pthread_attr_t;

typedef struct
{
  char m_dummy;
} pthread_mutexattr_t;

int pthread_create (pthread_t *, const pthread_attr_t *, void * (*) (void *), void *); /* expect: 1594,1753 */
int pthread_join (pthread_t, void **);                                          /* expect: 1594,1753 */
int pthread_cancel (pthread_t);                                                 /* expect: 1594,1753 */

int pthread_mutex_lock (pthread_mutex_t *);                                     /* expect: 1594,1753 */
int pthread_mutex_trylock (pthread_mutex_t *);                                  /* expect: 1594,1753 */
int pthread_mutex_unlock (pthread_mutex_t *);                                   /* expect: 1594,1753 */

int pthread_mutex_destroy (pthread_mutex_t *);                                  /* expect: 1594,1753 */
int pthread_mutex_init (pthread_mutex_t *, const pthread_mutexattr_t *);        /* expect: 1594,1753 */

int pthread_mutexattr_init (pthread_mutexattr_t *);                             /* expect: 1594,1753 */
int pthread_mutexattr_settype (pthread_mutexattr_t *, int);                     /* expect: 1594,1753 */
int pthread_mutexattr_destroy (pthread_mutexattr_t *);                          /* expect: 1594,1753 */

enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL,
  PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP
};

typedef struct
{
  char m_dummy;
} pthread_barrier_t;

typedef struct
{
  char m_dummy;
} pthread_barrierattr_t;

int pthread_barrier_init (pthread_barrier_t *, const pthread_barrierattr_t *, unsigned int); /* expect: 1594,1753 */
int pthread_barrier_destroy (pthread_barrier_t *);                                           /* expect: 1594,1753 */
int pthread_barrier_wait (pthread_barrier_t *);                                              /* expect: 1594,1753 */

typedef struct
{
  char m_dummy;
} pthread_cond_t;

typedef struct
{
  char m_dummy;
} pthread_condattr_t;

int pthread_cond_init (pthread_cond_t *, const pthread_condattr_t *);                      /* expect: 1594,1753 */
int pthread_cond_destroy (pthread_cond_t *);                                               /* expect: 1594,1753 */
int pthread_cond_signal (pthread_cond_t *);                                                /* expect: 1594,1753 */
int pthread_cond_broadcast (pthread_cond_t *);                                             /* expect: 1594,1753 */
int pthread_cond_wait (pthread_cond_t *, pthread_mutex_t *);                               /* expect: 1594,1753 */
int pthread_cond_timedwait (pthread_cond_t *, pthread_mutex_t *, const struct timespec *); /* expect: 1594,1594,1753,1755 */

typedef struct
{
  char m_dummy;
} pthread_rwlock_t;

typedef struct
{
  char m_dummy;
} pthread_rwlockattr_t;

int pthread_rwlock_init (pthread_rwlock_t *, const pthread_rwlockattr_t *);     /* expect: 1594,1753 */
int pthread_rwlock_destroy (pthread_rwlock_t *);                                /* expect: 1594,1753 */
int pthread_rwlock_rdlock (pthread_rwlock_t *);                                 /* expect: 1594,1753 */
int pthread_rwlock_tryrdlock (pthread_rwlock_t *);                              /* expect: 1594,1753 */
int pthread_rwlock_wrlock (pthread_rwlock_t *);                                 /* expect: 1594,1753 */
int pthread_rwlock_trywrlock (pthread_rwlock_t *);                              /* expect: 1594,1753 */
int pthread_rwlock_unlock (pthread_rwlock_t *);                                 /* expect: 1594,1753 */

#if defined( __cplusplus )
}
#endif

#ifndef NULL
#define NULL 0
#endif

#endif
  

