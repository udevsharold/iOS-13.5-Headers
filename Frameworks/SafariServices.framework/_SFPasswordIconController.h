/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _SFPasswordIconControllerDelegate;
#import <SafariServices/SafariServices-Structs.h>
@class WBSCache, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, _SFSiteMetadataManager;

@interface _SFPasswordIconController : NSObject {

	WBSCache* _iconCache;
	NSMutableDictionary* _domainsToExtractedBackgroundColors;
	NSMutableSet* _touchIconRequests;
	NSMutableDictionary* _domainToItems;
	NSMutableSet* _domainsThatHaveRequestedIcon;
	NSMutableArray* _blocksAwaitingHistoryItems;
	NSObject*<OS_dispatch_queue> _queue;
	_SFSiteMetadataManager* _metadataManager;
	NSMutableDictionary* _domainToAppID;
	NSMutableArray* _blocksAwaitingSharedWebCredentialsInformation;
	BOOL _initializedHistory;
	id<_SFPasswordIconControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFPasswordIconControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)preferredIconSize;
-(id<_SFPasswordIconControllerDelegate>)delegate;
-(void)setDelegate:(id<_SFPasswordIconControllerDelegate>)arg1 ;
-(id)initWithMetadataManager:(id)arg1 ;
-(void)clearIconFetchingState;
-(id)iconForDomain:(id)arg1 ;
-(id)backgroundColorForDomain:(id)arg1 ;
-(void)_fetchTouchIconForDomain:(id)arg1 ;
-(void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(BOOL)arg2 ;
-(void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_populateDomainToItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAppIconForDomain:(id)arg1 ;
-(void)_iconDidUpdateForDomain:(id)arg1 ;
-(void)_populateDomainToAppIDWithCompletion:(/*^block*/id)arg1 ;
@end

