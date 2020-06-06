/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSString, NSArray;

@interface _WKTextManipulationItem : NSObject {

	RetainPtr<NSString>* _identifier;
	RetainPtr<NSArray<_WKTextManipulationToken *> >* _tokens;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSArray * tokens; 
@property (nonatomic,copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)debugDescription;
-(NSString *)identifier;
-(NSArray *)tokens;
-(id)initWithIdentifier:(id)arg1 tokens:(id)arg2 ;
-(BOOL)isEqualToTextManipulationItem:(id)arg1 includingContentEquality:(BOOL)arg2 ;
-(id)_descriptionPreservingPrivacy:(BOOL)arg1 ;
@end

