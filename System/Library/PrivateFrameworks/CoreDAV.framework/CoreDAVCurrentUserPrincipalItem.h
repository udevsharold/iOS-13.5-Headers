/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:35:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVHrefItem, CoreDAVItemWithNoChildren;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem {

	CoreDAVHrefItem* _href;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) CoreDAVHrefItem * href;                                   //@synthesize href=_href - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(id)init;
-(id)description;
-(CoreDAVHrefItem *)href;
-(void)setHref:(CoreDAVHrefItem *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
@end

