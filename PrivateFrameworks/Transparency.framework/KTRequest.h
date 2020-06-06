/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:24 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSDate, NSUUID, NSSet;

@interface KTRequest : NSManagedObject

@property (nonatomic,retain) NSData * accountId; 
@property (nonatomic,copy) NSString * application; 
@property (nonatomic,retain) NSData * clientLoggableDatas; 
@property (nonatomic,copy) NSDate * earliestAddedDate; 
@property (nonatomic,retain) NSData * queryRequest; 
@property (nonatomic,retain) NSData * queryResponse; 
@property (nonatomic,copy) NSUUID * requestId; 
@property (assign,nonatomic) double requestTime; 
@property (assign,nonatomic) long long responseErrorCode; 
@property (nonatomic,copy) NSDate * responseTime; 
@property (assign,nonatomic) long long sequenceId; 
@property (nonatomic,copy) NSString * serverHint; 
@property (nonatomic,retain) NSData * serverLoggableDatas; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * uri; 
@property (assign,nonatomic) long long verificationResult; 
@property (nonatomic,retain) NSSet * failures; 
@property (nonatomic,retain) NSSet * requestIDCache; 
@property (nonatomic,retain) NSSet * smts; 
+(id)fetchRequest;
@end

