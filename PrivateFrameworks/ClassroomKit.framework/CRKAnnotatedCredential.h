/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRKKeychainItem;
@class NSDictionary;

@interface CRKAnnotatedCredential : NSObject {

	id<CRKKeychainItem> _credential;
	NSDictionary* _annotation;

}

@property (nonatomic,readonly) id<CRKKeychainItem> credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotation;              //@synthesize annotation=_annotation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<CRKKeychainItem>)credential;
-(NSDictionary *)annotation;
-(id)initWithCredential:(id)arg1 annotation:(id)arg2 ;
@end

