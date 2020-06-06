/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface CKFetchShareParticipantKeyOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSDictionary* _baseTokensByShareID;
	NSDictionary* _childRecordIDsByShareID;
	NSArray* _shareIDs;

}

@property (nonatomic,retain) NSDictionary * baseTokensByShareID;                  //@synthesize baseTokensByShareID=_baseTokensByShareID - In the implementation block
@property (nonatomic,retain) NSDictionary * childRecordIDsByShareID;              //@synthesize childRecordIDsByShareID=_childRecordIDsByShareID - In the implementation block
@property (nonatomic,retain) NSArray * shareIDs;                                  //@synthesize shareIDs=_shareIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)shareIDs;
-(void)setShareIDs:(NSArray *)arg1 ;
-(NSDictionary *)baseTokensByShareID;
-(void)setBaseTokensByShareID:(NSDictionary *)arg1 ;
-(NSDictionary *)childRecordIDsByShareID;
-(void)setChildRecordIDsByShareID:(NSDictionary *)arg1 ;
@end

