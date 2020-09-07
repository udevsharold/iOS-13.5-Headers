/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLSession, HKClinicalProviderSearchResultsPage, NSError;

@interface HDCPSSearchOperation : NSOperation {

	NSURLRequest* _request;
	NSURLSession* _session;
	HKClinicalProviderSearchResultsPage* _page;
	NSError* _error;

}

@property (nonatomic,copy,readonly) NSURLRequest * request;                         //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) HKClinicalProviderSearchResultsPage * page;              //@synthesize page=_page - In the implementation block
@property (nonatomic,copy) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)main;
-(void)setError:(NSError *)arg1 ;
-(NSURLSession *)session;
-(NSURLRequest *)request;
-(HKClinicalProviderSearchResultsPage *)page;
-(void)setPage:(HKClinicalProviderSearchResultsPage *)arg1 ;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
@end
