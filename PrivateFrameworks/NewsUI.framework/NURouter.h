/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NURouter.h>

@protocol NURouter <NSObject>
@required
-(void)routeToNewsAppForYouFeed;

@end


@protocol NUURLHandling;
@class NSString;

@interface NURouter : NSObject <NURouter> {

	id<NUURLHandling> _urlHandler;

}

@property (nonatomic,readonly) id<NUURLHandling> urlHandler;              //@synthesize urlHandler=_urlHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NUURLHandling>)urlHandler;
-(void)routeToNewsAppForYouFeed;
-(id)initWithURLHandler:(id)arg1 ;
@end

