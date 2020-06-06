/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PodcastsKit/MTBaseQueryObserver.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSString;

@interface MTAllPropertyChangesQueryObserver : MTBaseQueryObserver <NSFetchedResultsControllerDelegate> {

	BOOL _inCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startObserving;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)notifyObservers;
-(id)addResultsChangedHandler:(/*^block*/id)arg1 ;
@end

