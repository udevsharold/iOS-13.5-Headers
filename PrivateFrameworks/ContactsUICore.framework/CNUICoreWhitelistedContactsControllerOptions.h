/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNUICoreWhitelistedContactsControllerOptions : NSObject {

	BOOL _shouldPrepopulateEmptyWhitelist;
	BOOL _shouldRequireConfirmationOfChanges;

}

@property (nonatomic,readonly) BOOL shouldPrepopulateEmptyWhitelist;                 //@synthesize shouldPrepopulateEmptyWhitelist=_shouldPrepopulateEmptyWhitelist - In the implementation block
@property (nonatomic,readonly) BOOL shouldRequireConfirmationOfChanges;              //@synthesize shouldRequireConfirmationOfChanges=_shouldRequireConfirmationOfChanges - In the implementation block
+(id)iosOptions;
+(id)macOptions;
-(id)init;
-(id)initWithShouldPrepopulateEmptyWhitelist:(BOOL)arg1 shouldRequireConfirmationOfChanges:(BOOL)arg2 ;
-(BOOL)shouldPrepopulateEmptyWhitelist;
-(BOOL)shouldRequireConfirmationOfChanges;
@end

