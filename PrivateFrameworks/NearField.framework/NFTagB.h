/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData;


@protocol NFTagB
@property (nonatomic,copy,readonly) NSData * pupi; 
@property (nonatomic,copy,readonly) NSData * applicationData; 
@property (nonatomic,readonly) BOOL applicationDataCoding; 
@property (nonatomic,copy,readonly) NSData * selectedAID; 
@required
-(NSData *)applicationData;
-(NSData *)selectedAID;
-(NSData *)pupi;
-(BOOL)applicationDataCoding;

@end

