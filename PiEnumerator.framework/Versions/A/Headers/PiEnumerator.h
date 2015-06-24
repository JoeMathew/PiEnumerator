//
//  PiEnumerator.h
//  PiEnumerator
//
//  Created by Joe Mathew on 23/06/2015.
//  Copyright (c) 2015 Joe Mathew. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PiEnumerator : NSObject {
    unsigned long long currentValue;
    unsigned long long timeElapsed;
    BOOL isPaused;
}

- (unsigned long long) getCurrentResult;
- (void) startCalculation;
- (void) pauseCalculation;
- (void) stopCalculation;
- (unsigned long long) getTimeElapsed;

@end
