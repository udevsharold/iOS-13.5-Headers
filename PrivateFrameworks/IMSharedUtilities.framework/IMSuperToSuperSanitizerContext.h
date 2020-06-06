/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMFromSuperParserContext.h>

@class NSMutableAttributedString, NSMutableArray, NSString, NSAttributedString, NSArray;

@interface IMSuperToSuperSanitizerContext : IMFromSuperParserContext {

	NSMutableAttributedString* _content;
	NSMutableArray* _attachments;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	unsigned long long _offset;
	long long _baseWritingDirection;
	BOOL _extractAttachments;
	BOOL _hadBaseWritingDirectionAttribute;

}

@property (retain,readonly) NSAttributedString * sanitizedContent;              //@synthesize content=_content - In the implementation block
@property (retain,readonly) NSArray * attachments;                              //@synthesize attachments=_attachments - In the implementation block
-(void)dealloc;
-(id)name;
-(NSArray *)attachments;
-(id)resultsForLogging;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9 ;
-(void)parserDidEnd:(id)arg1 ;
-(id)initWithAttributedString:(id)arg1 extractAttachments:(BOOL)arg2 ;
-(NSAttributedString *)sanitizedContent;
@end

