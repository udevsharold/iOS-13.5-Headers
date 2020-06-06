/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class HKObject, HDDataOriginProvenance;

@interface _HDDataInsertionJournalEntry : HDJournalEntry {

	HKObject* _dataObject;
	HDDataOriginProvenance* _provenance;

}

@property (nonatomic,readonly) HKObject * dataObject;                            //@synthesize dataObject=_dataObject - In the implementation block
@property (nonatomic,readonly) HDDataOriginProvenance * provenance;              //@synthesize provenance=_provenance - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKObject *)dataObject;
-(HDDataOriginProvenance *)provenance;
-(id)initWithDataObject:(id)arg1 provenance:(id)arg2 ;
@end

