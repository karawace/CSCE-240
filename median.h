// Copyright 2024 wacenske CSCE 240
#include <hw5/inc/statistic.h>

#ifndef HW5_INC_MEDIAN_H
#define HW5_INC_MEDIAN_H

// Create the concrete class hw5::Median to extend hw5::Statistic.
// Ensure it overrides and implements all abstract methods of its parent and
// implements its own methods as necessary, e.g. operator[].
//
// Points:
//   - Styled Header: 0.5 POINTS
//   - Styled Source: 0.5 POINTS
//   - Compilation (make bin/median.o): 0.5 POINTS
//   - Compilation against tests (make test-median): 0.5 POINTS
//   - Default Constructor: 0.0 POINTS (tested via hw5::Statistic)
//   - Copy Constructor: 1.0 POINTS
//   - Calculate Method: 1.0 POINTS
//
namespace hw5 {

class Median : public Statistic {
  public:
  
  // Default Constructor : 1.0 POINTS
  Median() : Statistic() {
  }

  // Copy Contructor : 1.0 POINTS
  Median(const Median& other) : Statistic (other) {
  }

  // Calculate Method : 1.0 POINTS
  //   Uses data collected by parent class methods to calculate a Median of the
  //   doubles stored.
    double Calculate() const {
      return 0.0;
    }
  };

}  // namespace hw5

#endif  // HW5_INC_MEDIAN_H