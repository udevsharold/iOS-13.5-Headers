/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UITextDragFinishState.h>

@protocol UITextDragFinishState <NSObject>
@property (nonatomic,readonly) BOOL dragTearoffOccured; 
@property (nonatomic,readonly) CGPoint location; 
@required
-(CGPoint)location;
-(BOOL)dragTearoffOccured;

@end


@class NSString;

@interface UITextDragFinishState : NSObject <UITextDragFinishState> {

	BOOL _dragTearoffOccured;
	CGPoint _location;

}

@property (assign,nonatomic) BOOL dragTearoffOccured;               //@synthesize dragTearoffOccured=_dragTearoffOccured - In the implementation block
@property (assign,nonatomic) CGPoint location;                      //@synthesize location=_location - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)location;
-(void)setLocation:(CGPoint)arg1 ;
-(void)setDragTearoffOccured:(BOOL)arg1 ;
-(BOOL)dragTearoffOccured;
@end

