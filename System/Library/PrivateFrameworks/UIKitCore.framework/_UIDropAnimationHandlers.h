/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDragAnimating.h>

@class NSMutableArray, NSArray, NSString;

@interface _UIDropAnimationHandlers : NSObject <UIDragAnimating> {

	NSMutableArray* _alongsideAnimationHandlers;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,readonly) NSArray * alongsideAnimationHandlers; 
@property (nonatomic,readonly) NSArray * completionHandlers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addAnimations:(/*^block*/id)arg1 ;
-(void)addCompletion:(/*^block*/id)arg1 ;
-(NSArray *)alongsideAnimationHandlers;
-(NSArray *)completionHandlers;
-(void)invokeAllCompletionHandlers;
-(void)resetAllAnimationHandlers;
@end

