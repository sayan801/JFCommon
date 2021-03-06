//
// JFInterruptableActionPerformer.h
// JFCommon
//
// Created by Jason Fuerstenberg on 5/3/2012.
// Copyright (c) 2012 Jason Fuerstenberg. All rights reserved.
//
// http://www.jayfuerstenberg.com
// jay@jayfuerstenberg.com
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <Foundation/Foundation.h>


@interface JFInterruptableActionPerformer : NSObject {
    
@private
    NSTimer *_timer;
    id <NSObject> _target;
    SEL _action;
    id <NSObject> _object;
    BOOL _expectsObject;
    NSTimeInterval _delay;
    NSTimeInterval _previousInvocation;
	BOOL _cancelled;
}


#pragma mark - Action methods

- (void) performInterruptableAction: (SEL) action uponTarget: (id <NSObject>) target afterDelay: (NSTimeInterval) delay;
- (void) performInterruptableAction: (SEL) action uponTarget: (id <NSObject>) target afterDelay: (NSTimeInterval) delay withObject: (id <NSObject>) object;
- (void) cancel;

@end
