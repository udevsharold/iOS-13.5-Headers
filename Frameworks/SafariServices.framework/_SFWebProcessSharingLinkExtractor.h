/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFWebProcessSharingLinkExtractor.h>

@protocol _SFWebProcessSharingLinkExtractor
@required
-(void)fetchSharingLinkWithCompletionHandler:(/*^block*/id)arg1;

@end


@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {

	_SFWebProcessPlugInPageController* _pageController;
	_WKRemoteObjectInterface* _sharingLinkExtractorInterface;

}
-(id)initWithPageController:(id)arg1 ;
-(void)fetchSharingLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setUpRemoteInterface;
-(id)_injectedLinkExtractorSourceString;
-(id)_extractSharingLink;
-(id)_extractCanonicalLinkWithInjectedObject:(id)arg1 ;
-(id)_extractDominantIFrameWithInjectedObject:(id)arg1 ;
-(void)_withInjectedLinkExtractorObjectInFrame:(id)arg1 callback:(/*^block*/id)arg2 ;
@end

