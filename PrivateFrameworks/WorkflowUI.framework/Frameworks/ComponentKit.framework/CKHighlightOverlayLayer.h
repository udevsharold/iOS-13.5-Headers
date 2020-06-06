/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentKit/ComponentKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, CALayer;

@interface CKHighlightOverlayLayer : CALayer {

	NSArray* _rects;
	CALayer* _targetLayer;

}

@property (retain) CGColorRef highlightColor; 
@property (__weak) CALayer * targetLayer;                  //@synthesize targetLayer=_targetLayer - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
+(id)defaultValueForKey:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(CALayer *)targetLayer;
-(id)initWithRects:(id)arg1 targetLayer:(id)arg2 ;
-(id)initWithRects:(id)arg1 ;
-(void)setTargetLayer:(CALayer *)arg1 ;
@end

