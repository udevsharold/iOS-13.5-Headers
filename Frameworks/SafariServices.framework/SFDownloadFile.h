/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@protocol SFDownloadFileDelegate;
@class NSURL, NSOperationQueue, NSSet, NSData, NSString;

@interface SFDownloadFile : NSObject <NSFilePresenter> {

	BOOL _invalidated;
	BOOL _usingSecurityScopedURL;
	BOOL _suspended;
	id<SFDownloadFileDelegate> _delegate;
	NSURL* _URL;
	NSData* _bookmarkData;

}

@property (assign,nonatomic,__weak) id<SFDownloadFileDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSData * bookmarkData;                                    //@synthesize bookmarkData=_bookmarkData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
-(void)dealloc;
-(void)_suspend;
-(void)_resume;
-(void)invalidate;
-(id)initWithURL:(id)arg1 ;
-(id<SFDownloadFileDelegate>)delegate;
-(void)setDelegate:(id<SFDownloadFileDelegate>)arg1 ;
-(NSURL *)URL;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(NSData *)bookmarkData;
-(id)initWithURL:(id)arg1 bookmarkData:(id)arg2 ;
-(id)initWithBookmarkData:(id)arg1 ;
@end

