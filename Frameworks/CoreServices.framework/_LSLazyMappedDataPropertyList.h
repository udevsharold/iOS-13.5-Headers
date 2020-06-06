/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/_LSLazyPropertyList.h>

@class NSData, _LSPlistHint;

@interface _LSLazyMappedDataPropertyList : _LSLazyPropertyList {

	NSData* _plistData;
	_LSPlistHint* _plistHint;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_getPropertyList:(id*)arg1 ;
-(BOOL)_getValue:(id*)arg1 forPropertyListKey:(id)arg2 ;
-(id)initWithPropertyListData:(id)arg1 ;
-(id)_plistHint;
-(id)objectsForPropertyListKeys:(id)arg1 ;
@end

