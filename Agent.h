//****************************************************************************
//
//
//
//****************************************************************************



#ifndef __AGENT_H__
#define __AGENT_H__


// ===========================================================================
//                                  Libraries
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <string.h>


// ===========================================================================
//                                Project Files
// ===========================================================================
#include "Boids.h"



// ===========================================================================
//                              Class declarations
// ===========================================================================






class Agent : public Boids
{
  public :
    
    // =======================================================================
    //                                 Enums
    // =======================================================================
    
    // =======================================================================
    //                               Constructors
    // =======================================================================
    Agent(void);

    // =======================================================================
    //                                Destructor
    // =======================================================================
    virtual ~Agent(void);

    // =======================================================================
    //                            Accessors: getters
    // =======================================================================
     inline  float Get_x(void) const;
     inline  float Get_y(void) const;
    // =======================================================================
    //                            Accessors: setters
    // =======================================================================
     inline  void Set_x( float newx);
     inline  void Set_y( float newy);
    // =======================================================================
    //                                Operators
    // =======================================================================

    // =======================================================================
    //                              Public Methods
    // =======================================================================
      float position(void);
      float global_speed();
      float alignement();
      float cohesive();
      float separation();
      int agentj(int num_agent);
    // =======================================================================
    //                             Public Attributes
    // =======================================================================
      float *agent;




  protected :

    // =======================================================================
    //                            Forbidden Constructors
    // =======================================================================
    /*Agent(void)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/
    /*Agent(const Agent &model)
    {
      printf("%s:%d: error: call to forbidden constructor.\n", __FILE__, __LINE__);
      exit(EXIT_FAILURE);
    };*/


    // =======================================================================
    //                              Protected Methods
    // =======================================================================
       
    // =======================================================================
    //                             Protected Attributes
    // =======================================================================
       //number of agent between agent i and r
        unsigned int K;
       // number of agent that their distance with j is less than c
        unsigned int Kbis;
       //number of objects that their distance with i is less than c
        unsigned int O;

       float x;
       float y;
       float init_speed;
       static float dt;
      
      




};


// ===========================================================================
//                              Getters' definitions
// ===========================================================================
   inline  float Agent::Get_x(void) const
   {
    return x;
   }
   inline  float Agent::Get_y(void) const
   {
    return y;
   }
// ===========================================================================
//                              Setters' definitions
// ===========================================================================
   inline  void Agent::Set_x(float newx) 
   {
      x=newx;
   }
   inline  void Agent::Set_y(float newy) 
   {
      x=newy;
   };
// ===========================================================================
//                             Operators' definitions
// ===========================================================================

// ===========================================================================
//                          Inline functions' definition
// ===========================================================================


#endif // __AGENT_H__

