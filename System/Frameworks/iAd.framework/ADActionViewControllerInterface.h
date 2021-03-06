/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class ADAdSpace;


@protocol ADActionViewControllerInterface <NSObject>
@property (nonatomic,readonly) BOOL readyForPresentation; 
@property (nonatomic,__weak,readonly) ADAdSpace * adSpace; 
@required
-(void)dismiss;
-(ADAdSpace *)adSpace;
-(void)clientApplicationDidEnterBackground;
-(void)clientApplicationCancelledAction;
-(BOOL)readyForPresentation;

@end

