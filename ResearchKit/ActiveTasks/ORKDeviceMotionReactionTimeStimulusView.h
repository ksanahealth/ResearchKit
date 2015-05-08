//
//  ORKDeviceMotionReactionTimeStimulusView.h
//  ResearchKit
//
//  Created by James Cox on 07/05/2015.
//  Copyright (c) 2015 researchkit.org. All rights reserved.
//

#import "ORKCustomStepView_Internal.h"

@interface ORKDeviceMotionReactionTimeStimulusView : UIView

- (void)startReadyAnimationWithDuration:(NSTimeInterval)duration completion: (nullable void(^)(void))completion;

- (void)startSuccessAnimationWithDuration:(NSTimeInterval)duration completion:(nullable void(^)(void))completion;

- (void)startFailureAnimationWithDuration:(NSTimeInterval)duration completion:(nullable void(^)(void))completion;

- (void)hideStimulus: (BOOL) hidden;

@end
