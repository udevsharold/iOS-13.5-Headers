/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISOperation.h>

@class NSURL, NSArray;

@interface ISURLResolverOperation : ISOperation {

	CFHostRef _host;
	NSURL* _url;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) NSArray * resolvedAddresses; 
@property (readonly) NSArray * resolvedAddressStrings; 
-(void)dealloc;
-(void)run;
-(id)initWithURL:(id)arg1 ;
-(id)url;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(void)setUrl:(id)arg1 ;
-(NSArray *)resolvedAddresses;
-(void)_runLookupForHostname:(id)arg1 ;
-(void)_resolutionCompletedWithError:(id)arg1 ;
-(NSArray *)resolvedAddressStrings;
@end
