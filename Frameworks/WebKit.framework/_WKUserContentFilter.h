/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface _WKUserContentFilter : NSObject <WKObject> {

	RetainPtr<WKContentRuleList>* _contentRuleList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(id)_initWithWKContentRuleList:(id)arg1 ;
@end

