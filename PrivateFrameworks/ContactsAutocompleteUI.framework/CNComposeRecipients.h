/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSItemProviderReading.h>

@class NSArray, NSString;

@interface CNComposeRecipients : NSObject <NSItemProviderReading> {

	NSArray* _recipients;

}

@property (nonatomic,copy,readonly) NSArray * recipients;              //@synthesize recipients=_recipients - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)readableTypeIdentifiersForItemProvider;
-(NSArray *)recipients;
-(id)initWithRecipients:(id)arg1 ;
@end

