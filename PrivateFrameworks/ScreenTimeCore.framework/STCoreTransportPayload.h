/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, STCoreOrganization, NSArray, NSData;

@interface STCoreTransportPayload : NSManagedObject

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationEnqueued; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationPending; 
@property (nonatomic,retain) STCoreOrganization * sourceOrganizationRecent; 
@property (nonatomic,copy) NSArray * destinations; 
@property (nonatomic,copy) NSData * payloadData; 
+(id)fetchRequestForPayloadsOfType:(id)arg1 ;
+(id)fetchLastTransportPayloadInContext:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
+(id)fetchTransportPayloadContext:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)description;
-(NSArray *)destinations;
-(void)setDestinations:(NSArray *)arg1 ;
@end

