/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDDomainServicing
@required
-(void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)fetchAndStartEnumeratingWithSettings:(id)arg1 observer:(id)arg2 request:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)didChangeItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_t_setFilePresenterObserver:(id)arg1;
-(void)resolveItemID:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)setDomainWithIdentifier:(id)arg1 ejectable:(BOOL)arg2 completionHandler:(/*^block*/id)arg3;

@end

