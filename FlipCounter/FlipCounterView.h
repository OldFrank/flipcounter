//
//  FlipCounterView.h
//  FlipCounter
//
//  Created by Steven Fusco on 10/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipCounterViewDigitIndex;



@interface FlipCounterView : UIView
{
    @private
    NSMutableArray* topFrames;
    NSMutableArray* bottomFrames;
    int numTopFrames;
    int numBottomFrames;
    
    NSMutableArray* digits;
    
    BOOL isAnimating;
}

- (void) add:(NSUInteger)incr;

@end



@interface FlipCounterViewDigitIndex : NSObject

- (id)initWithOldValue:(NSUInteger)o
              newValue:(NSUInteger)n
              frameTop:(NSUInteger)ft
           frameBottom:(NSUInteger)fb;

@property (readwrite,nonatomic,assign) NSUInteger topIndex;
@property (readwrite,nonatomic,assign) NSUInteger bottomIndex;
@property (readwrite,nonatomic,assign) NSUInteger oldValue;
@property (readwrite,nonatomic,assign) NSUInteger newValue;

@end