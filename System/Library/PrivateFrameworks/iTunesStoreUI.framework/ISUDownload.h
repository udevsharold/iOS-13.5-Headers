/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSDownload, NSObject, NSString, NSNumber, NSURL;

@interface ISUDownload : NSObject {

	SSDownload* _download;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) SSDownload * managedDownload; 
@property (nonatomic,readonly) NSString * artistName; 
@property (getter=isContentRestricted,nonatomic,readonly) BOOL contentRestricted; 
@property (nonatomic,readonly) NSString * phaseIdentifier; 
@property (nonatomic,readonly) NSNumber * storeItemIdentifier; 
@property (nonatomic,readonly) NSNumber * storePreorderIdentifier; 
@property (nonatomic,readonly) NSURL * thumbnailImageURL; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) long long bytesDownloaded; 
@property (nonatomic,readonly) long long bytesTotal; 
@property (nonatomic,readonly) double estimatedSecondsRemaining; 
@property (getter=isPurchase,nonatomic,readonly) BOOL purchase; 
@property (nonatomic,readonly) double percentComplete; 
@property (nonatomic,readonly) NSString * statusDescription; 
@property (getter=isPausable,nonatomic,readonly) BOOL pausable; 
+(void)initialize;
+(id)downloadProperties;
+(id)downloadExternalProperties;
-(void)dealloc;
-(NSString *)title;
-(BOOL)isPausable;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(double)percentComplete;
-(NSString *)statusDescription;
-(NSString *)artistName;
-(NSString *)phaseIdentifier;
-(NSNumber *)storeItemIdentifier;
-(double)estimatedSecondsRemaining;
-(NSURL *)thumbnailImageURL;
-(BOOL)isContentRestricted;
-(NSNumber *)storePreorderIdentifier;
-(BOOL)isPurchase;
-(id)initWithManagedDownload:(id)arg1 ;
-(id)copyLocalizedStatusString;
-(SSDownload *)managedDownload;
-(void)resetPreorderState;
-(void)setManagedDownload:(SSDownload *)arg1 ;
@end

