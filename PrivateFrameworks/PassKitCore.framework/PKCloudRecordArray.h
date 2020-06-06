/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {

	NSMutableArray* _cloudRecords;

}

@property (nonatomic,readonly) NSArray * cloudRecords; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allItems;
-(void)addValuesFromCloudRecordArray:(id)arg1 ;
-(NSArray *)cloudRecords;
-(void)addCloudRecord:(id)arg1 ;
-(id)allRecordsWithRecordType:(id)arg1 ;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)filteredCloudRecordArrayWithPredicate:(id)arg1 ;
-(id)allRecordNames;
@end

