/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReminderKit/ReminderKit-Structs.h>
@class NSArray;

@interface REMClockElementList : NSObject {

	NSArray* _elements;

}

@property (nonatomic,copy) NSArray * elements;              //@synthesize elements=_elements - In the implementation block
+(BOOL)list:(id)arg1 isCompatibleToList:(id)arg2 ;
+(long long)compareList:(id)arg1 toList:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSArray *)elements;
-(void)setElements:(NSArray *)arg1 ;
-(id)initWithCRVectorTimestampElements:(id)arg1 ;
-(id)initWithTTVectorTimestampElements:(id)arg1 ;
-(void)encodeIntoEntryArchive:(ReplicaEntry*)arg1 ;
-(id)initWithEntryArchive:(const ReplicaEntry*)arg1 ;
@end

