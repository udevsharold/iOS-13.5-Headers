/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, HMSettingValue, NSString;


@protocol HMDSettingOwnerProtocol <HMDSettingProtocol>
@property (readonly) NSArray * constraints; 
@property (copy,readonly) HMSettingValue * internalValue; 
@property (copy) NSString * keyPath; 
@required
-(NSArray *)constraints;
-(NSString *)keyPath;
-(void)addConstraint:(id)arg1;
-(void)setKeyPath:(id)arg1;
-(HMSettingValue *)internalValue;
-(BOOL)updateWithSettingValue:(id)arg1;

@end

