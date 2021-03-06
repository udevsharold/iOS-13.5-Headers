/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSArray, NSObject, _UIMatchingExtensionsResult;

@interface _UIActivityApplicationExtensionDiscovery : NSObject {

	NSArray* _extensionPointIdentifiers;
	/*^block*/id _fetchShortcutsBlock;
	NSObject*<OS_dispatch_queue> _primedExtensionsQueue;
	_UIMatchingExtensionsResult* _primedExtensionsResult;

}

@property (nonatomic,copy) NSArray * extensionPointIdentifiers;                       //@synthesize extensionPointIdentifiers=_extensionPointIdentifiers - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> primedExtensionsQueue;                //@synthesize primedExtensionsQueue=_primedExtensionsQueue - In the implementation block
@property (retain) _UIMatchingExtensionsResult * primedExtensionsResult;              //@synthesize primedExtensionsResult=_primedExtensionsResult - In the implementation block
@property (nonatomic,copy) id fetchShortcutsBlock;                                    //@synthesize fetchShortcutsBlock=_fetchShortcutsBlock - In the implementation block
+(id)extensionBasedActivityForExtension:(id)arg1 ;
+(id)extensionMatchingDictionariesForExtensionItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setExtensionPointIdentifiers:(NSArray *)arg1 ;
-(void)setPrimedExtensionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithExtensionPointIdentifiers:(id)arg1 ;
-(NSArray *)extensionPointIdentifiers;
-(NSObject*<OS_dispatch_queue>)primedExtensionsQueue;
-(void)setPrimedExtensionsResult:(_UIMatchingExtensionsResult *)arg1 ;
-(_UIMatchingExtensionsResult *)primedExtensionsResult;
-(id)fetchShortcutsBlock;
-(void)primeWithDiscoveryContext:(id)arg1 ;
-(id)activitiesForMatchingContext:(id)arg1 error:(id*)arg2 ;
-(void)setFetchShortcutsBlock:(id)arg1 ;
@end

