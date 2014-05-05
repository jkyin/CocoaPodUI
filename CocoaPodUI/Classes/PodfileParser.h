//
//  PodfileParser.h
//  CocoaPodUI
//
//  Created by Evgeniy Kratko on 15.04.14.
//  Copyright (c) 2014 akki. All rights reserved.
//
//Copyright (c) 2014 Yevgeniy Branitsky (Kratko)
//
//Permission is hereby granted, free of charge, to any person obtaining a copy
//of this software and associated documentation files (the "Software"), to deal
//in the Software without restriction, including without limitation the rights
//to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//copies of the Software, and to permit persons to whom the Software is
//furnished to do so, subject to the following conditions:
//
//The above copyright notice and this permission notice shall be included in
//all copies or substantial portions of the Software.
//
//THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//THE SOFTWARE.

#import <Foundation/Foundation.h>

static NSString *const kPodfileTargetName = @"CocoaPodUI::TargetName";
static NSString *const kPodfileDefaultTargetName = @"CocoaPodUI::DefaultTarget";
static NSString *const kPodfileTargetRange = @"CocoaPodUI::TargetRange";

@interface PodfileParser : NSObject
{
    @private
    NSString *_content;
}
+ (instancetype)parserWithContentsOfFile:(NSString*)path;
- (NSString*)platformLine:(NSRange*)range;
- (NSUInteger)targetCount;
- (NSDictionary*)targetAtIndex:(NSUInteger)index;
- (NSString*)preinstallHook:(NSRange*)range;
- (NSString*)postinstallHook:(NSRange*)range;
- (BOOL)hasPreinstallHook;
- (BOOL)hasPostinstallHook;
@end