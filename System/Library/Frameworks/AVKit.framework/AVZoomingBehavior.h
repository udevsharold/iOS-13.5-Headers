/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVBehaviorInternal.h>
#import <AVKit/AVBehavior.h>

@class AVZoomingBehaviorContext, NSString;

@interface AVZoomingBehavior : NSObject <AVBehaviorInternal, AVBehavior> {

	AVZoomingBehaviorContext* _behaviorContext;

}

@property (assign,nonatomic,__weak) AVZoomingBehaviorContext * behaviorContext;              //@synthesize behaviorContext=_behaviorContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)behaviorContextClass;
-(void)willMoveToContext:(id)arg1 ;
-(AVZoomingBehaviorContext *)behaviorContext;
-(void)setBehaviorContext:(AVZoomingBehaviorContext *)arg1 ;
-(void)didMoveToContext:(id)arg1 ;
-(void)willRemoveFromContext:(id)arg1 ;
-(void)didRemoveFromContext:(id)arg1 ;
@end

