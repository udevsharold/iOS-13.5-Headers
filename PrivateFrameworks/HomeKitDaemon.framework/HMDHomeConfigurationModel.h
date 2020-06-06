/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:42 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber;

@interface HMDHomeConfigurationModel : HMDBackingStoreModelObject {

	BOOL _homeHasLocalChanges;

}

@property (nonatomic,retain) NSNumber * configurationVersion; 
@property (assign,nonatomic) BOOL homeHasLocalChanges;                     //@synthesize homeHasLocalChanges=_homeHasLocalChanges - In the implementation block
+(id)properties;
-(BOOL)homeHasLocalChanges;
-(void)setHomeHasLocalChanges:(BOOL)arg1 ;
@end

