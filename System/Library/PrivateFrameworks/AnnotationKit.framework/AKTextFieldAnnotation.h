/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AKTextBoxAnnotation.h>

@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation {

	NSString* _fieldName;

}

@property (copy) NSString * fieldName;              //@synthesize fieldName=_fieldName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)fieldName;
-(void)setFieldName:(NSString *)arg1 ;
@end
