/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID;

@interface HDClinicalAccountEntityUpdateJournalEntry : HDJournalEntry {

	NSUUID* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSUUID * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)accountIdentifier;
-(id)initWithAccountIdentifier:(id)arg1 ;
@end

