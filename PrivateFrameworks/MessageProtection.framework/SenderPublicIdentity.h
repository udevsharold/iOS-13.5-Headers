/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSData, RegisteredPreKey;

@interface SenderPublicIdentity : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * destinationHash; 
@property (nonatomic,retain) NSData * skippedCounters; 
@property (assign,nonatomic) int upperBufferIndex; 
@property (nonatomic,retain) RegisteredPreKey * messagedKey; 
+(id)fetchRequest;
@end

