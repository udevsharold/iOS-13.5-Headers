/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HomeKitBackingStore/HMBModelField.h>

@class HMFVersion;

@interface HMBMutableModelField : HMBModelField

@property (assign,getter=isOptional,nonatomic) BOOL optional; 
@property (assign,nonatomic) unsigned long long loggingVisibility; 
@property (nonatomic,retain) id defaultValue; 
@property (nonatomic,copy) HMFVersion * readonlyVersion; 
@property (nonatomic,copy) HMFVersion * unavailableVersion; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

