/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASProtocolCapabilities : NSObject {

	NSString* _calConstraintsPlistPath;
	NSString* _abConstraintsPlistPath;

}

@property (nonatomic,retain) NSString * calConstraintsPlistPath;              //@synthesize calConstraintsPlistPath=_calConstraintsPlistPath - In the implementation block
@property (nonatomic,retain) NSString * abConstraintsPlistPath;               //@synthesize abConstraintsPlistPath=_abConstraintsPlistPath - In the implementation block
-(BOOL)supportsConversations;
-(BOOL)supportsMailboxSearch;
-(BOOL)supportsEmailFlagging;
-(BOOL)supportsDraftFolderSync;
-(BOOL)supportsSettingsCommand;
-(BOOL)supportsProtocolVersion:(id)arg1 ;
-(id)initWithProtocolVersionString:(id)arg1 ;
-(BOOL)supportsItemOperationsCommand;
-(BOOL)serverUpdatesAttendeeStatusOnEvents;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(BOOL)supportsNoteSyncing;
-(BOOL)supportsFreeBusyLookup;
-(id)_calConstraintsPlistPath;
-(id)_abConstraintsPlistPath;
-(NSString *)calConstraintsPlistPath;
-(void)setCalConstraintsPlistPath:(NSString *)arg1 ;
-(NSString *)abConstraintsPlistPath;
-(void)setAbConstraintsPlistPath:(NSString *)arg1 ;
@end

