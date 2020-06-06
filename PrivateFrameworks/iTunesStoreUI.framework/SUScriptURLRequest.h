/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:50 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSMutableURLRequestProperties, NSNumber, NSString;

@interface SUScriptURLRequest : SUScriptObject {

	SSMutableURLRequestProperties* _requestProperties;

}

@property (copy) NSNumber * timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (copy) id URLs; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setURLs:(id)arg1 ;
-(id)URLs;
-(id)_className;
-(void)setTimeoutInterval:(NSNumber *)arg1 ;
-(NSNumber *)timeoutInterval;
-(id)attributeKeys;
-(void)setURLBagKey:(NSString *)arg1 ;
-(NSString *)URLBagKey;
-(id)scriptAttributeKeys;
-(id)initWithNativeRequestProperties:(id)arg1 ;
-(id)copyNativeRequestProperties;
@end

