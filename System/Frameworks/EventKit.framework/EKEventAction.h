/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString, NSData;

@interface EKEventAction : EKObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSData * externalRepresentation; 
+(Class)frozenClass;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSString *)externalScheduleID;
-(void)setExternalScheduleID:(NSString *)arg1 ;
@end
