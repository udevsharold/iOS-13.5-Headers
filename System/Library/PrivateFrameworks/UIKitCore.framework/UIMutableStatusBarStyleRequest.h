/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStatusBarStyleRequest.h>

@class UIColor, NSNumber;

@interface UIMutableStatusBarStyleRequest : UIStatusBarStyleRequest

@property (assign,nonatomic) long long style; 
@property (assign,nonatomic) long long legibilityStyle; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (assign,nonatomic) double foregroundAlpha; 
@property (nonatomic,retain) NSNumber * overrideHeight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)setForegroundAlpha:(double)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
-(void)setOverrideHeight:(NSNumber *)arg1 ;
@end

