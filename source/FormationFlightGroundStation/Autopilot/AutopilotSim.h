/*
 * AutopilotSim.h
 *
 * Code generation for model "AutopilotSim".
 *
 * Model version              : 1.27
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C++ source code generated on : Fri May 17 10:59:06 2019
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AutopilotSim_h_
#define RTW_HEADER_AutopilotSim_h_
#include <cmath>
#include <string.h>
#ifndef AutopilotSim_COMMON_INCLUDES_
# define AutopilotSim_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* AutopilotSim_COMMON_INCLUDES_ */

#include "AutopilotSim_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Dx;                           /* '<Root>/MATLAB Function' */
  real_T Dy;                           /* '<Root>/MATLAB Function' */
  real_T Dz;                           /* '<Root>/MATLAB Function' */
  real_T Dv;                           /* '<Root>/MATLAB Function' */
  real_T Dphi;                         /* '<Root>/MATLAB Function' */
  real_T Dmu;                          /* '<Root>/MATLAB Function' */
} B_AutopilotSim_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  int_T IntegratorI_IWORK;             /* '<Root>/IntegratorI' */
  int_T Integrator1_IWORK;             /* '<Root>/Integrator1' */
  int_T Integrator2_IWORK;             /* '<Root>/Integrator2' */
  int_T Integrator3_IWORK;             /* '<Root>/Integrator3' */
  int_T Integrator4_IWORK;             /* '<Root>/Integrator4' */
  int_T Integrator5_IWORK;             /* '<Root>/Integrator5' */
} DW_AutopilotSim_T;

/* Continuous states (default storage) */
typedef struct {
  real_T x;                            /* '<Root>/IntegratorI' */
  real_T y;                            /* '<Root>/Integrator1' */
  real_T z;                            /* '<Root>/Integrator2' */
  real_T v;                            /* '<Root>/Integrator3' */
  real_T theta;                        /* '<Root>/Integrator4' */
  real_T theta_g;                      /* '<Root>/Integrator5' */
} X_AutopilotSim_T;

/* State derivatives (default storage) */
typedef struct {
  real_T x;                            /* '<Root>/IntegratorI' */
  real_T y;                            /* '<Root>/Integrator1' */
  real_T z;                            /* '<Root>/Integrator2' */
  real_T v;                            /* '<Root>/Integrator3' */
  real_T theta;                        /* '<Root>/Integrator4' */
  real_T theta_g;                      /* '<Root>/Integrator5' */
} XDot_AutopilotSim_T;

/* State disabled  */
typedef struct {
  boolean_T x;                         /* '<Root>/IntegratorI' */
  boolean_T y;                         /* '<Root>/Integrator1' */
  boolean_T z;                         /* '<Root>/Integrator2' */
  boolean_T v;                         /* '<Root>/Integrator3' */
  boolean_T theta;                     /* '<Root>/Integrator4' */
  boolean_T theta_g;                   /* '<Root>/Integrator5' */
} XDis_AutopilotSim_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T v_c;                          /* '<Root>/v_c' */
  real_T phi_c;                        /* '<Root>/phi_c' */
  real_T miu_c;                        /* '<Root>/miu_c' */
  real_T k_v;                          /* '<Root>/k_v' */
  real_T k_phi;                        /* '<Root>/k_phi' */
  real_T k_miu;                        /* '<Root>/k_miu' */
  real_T x0;                           /* '<Root>/x0' */
  real_T y0;                           /* '<Root>/y0' */
  real_T z0;                           /* '<Root>/z0' */
  real_T v0;                           /* '<Root>/v0' */
  real_T phi0;                         /* '<Root>/phi0' */
  real_T miu0;                         /* '<Root>/miu0' */
} ExtU_AutopilotSim_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T x;                            /* '<Root>/x' */
  real_T y;                            /* '<Root>/y' */
  real_T z;                            /* '<Root>/z' */
  real_T v;                            /* '<Root>/v' */
  real_T phi;                          /* '<Root>/phi' */
  real_T miu;                          /* '<Root>/miu' */
  real_T vz;                           /* '<Root>/vz' */
  real_T dphi;                         /* '<Root>/dphi' */
  real_T dmiu;                         /* '<Root>/dmiu' */
} ExtY_AutopilotSim_T;

/* Real-time Model Data Structure */
struct tag_RTM_AutopilotSim_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_AutopilotSim_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[6];
  real_T odeF[4][6];
  ODE4_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    boolean_T firstInitCondFlag;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Class declaration for model AutopilotSim */
class AutopilotSimModelClass {
  /* public data and function members */
 public:
  /* External inputs */
  ExtU_AutopilotSim_T AutopilotSim_U;

  /* External outputs */
  ExtY_AutopilotSim_T AutopilotSim_Y;

  /* model initialize function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  AutopilotSimModelClass();

  /* Destructor */
  ~AutopilotSimModelClass();

  /* Real-Time Model get method */
  RT_MODEL_AutopilotSim_T * getRTM();

  /* private data and function members */
 private:
  /* Block signals */
  B_AutopilotSim_T AutopilotSim_B;

  /* Block states */
  DW_AutopilotSim_T AutopilotSim_DW;
  X_AutopilotSim_T AutopilotSim_X;     /* Block continuous states */

  /* Real-Time Model */
  RT_MODEL_AutopilotSim_T AutopilotSim_M;

  /* Continuous states update member function*/
  void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si );

  /* Derivatives member function */
  void AutopilotSim_derivatives();
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AutopilotSim'
 * '<S1>'   : 'AutopilotSim/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_AutopilotSim_h_ */
