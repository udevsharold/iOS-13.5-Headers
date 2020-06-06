/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPBaseMediaItem.h>

@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem {

	NSURL* _url;
	NSSet* _traits;

}

@property (nonatomic,copy) NSURL * url;                 //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSSet * traits;              //@synthesize traits=_traits - In the implementation block
-(id)init;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSSet *)traits;
-(void)setTraits:(NSSet *)arg1 ;
-(id)mediaItemURL;
-(BOOL)isEqualToMediaItem:(id)arg1 ;
-(id)initWithURL:(id)arg1 traits:(id)arg2 ;
-(BOOL)hasTrait:(id)arg1 ;
@end

