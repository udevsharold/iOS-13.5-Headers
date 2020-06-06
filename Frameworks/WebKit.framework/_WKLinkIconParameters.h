/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, NSNumber, NSDictionary;

@interface _WKLinkIconParameters : NSObject {

	RetainPtr<NSURL>* _url;
	long long _iconType;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<NSNumber>* _size;
	RetainPtr<NSMutableDictionary>* _attributes;

}

@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,copy,readonly) NSDictionary * attributes; 
-(NSNumber *)size;
-(NSDictionary *)attributes;
-(NSURL *)url;
-(NSString *)mimeType;
-(long long)iconType;
-(id)_initWithLinkIcon:(const LinkIcon*)arg1 ;
@end

